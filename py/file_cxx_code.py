import requests
import re
import datetime
import pygetwindow as gw
import pyautogui
import time
import pyperclip

def get_activation_code():
    # 请求网页
    url = 'https://filecxx.com/zh_CN/activation_code.html'
    response = requests.get(url)
    html_content = response.text

    # 获取今天和明天的日期
    today = datetime.date.today()
    tomorrow = today + datetime.timedelta(days=1)

    today_str = today.strftime('%Y-%m-%d')
    tomorrow_str = tomorrow.strftime('%Y-%m-%d')

    # 创建正则表达式
    pattern = re.compile(f'{today_str} 00:00:00 - {tomorrow_str} 00:00:00.*?\n(.+?)\n')

    # 使用正则表达式查找激活码
    result = pattern.search(html_content)

    if result:
        activation_code = result.group(1)
        return activation_code
    else:
        print("没有找到符合条件的激活码")
        return None

def input_activation_code_and_click_confirm(window_title, activation_code):
    try:
        # 查找指定标题的窗口
        target_window = gw.getWindowsWithTitle(window_title)[0]
        target_window.restore()  # 还原窗口（如果最小化）
        target_window.activate()  # 激活窗口

        # 延时确保窗口激活
        time.sleep(1)

        # 计算输入框的中心位置
        input_box_x = (target_window.left + target_window.right) // 2
        input_box_y = (target_window.top + target_window.bottom) // 2 - 15

        # 移动鼠标到输入框中心并点击
        pyautogui.moveTo(input_box_x, input_box_y)
        pyautogui.click()

        # 清空输入框中的数据
        pyautogui.hotkey('ctrl', 'a')
        pyautogui.press('delete')

        # 将激活码复制到剪贴板
        pyperclip.copy(activation_code)

        # 粘贴激活码到输入框
        pyautogui.hotkey('ctrl', 'v')

        # 延时确保激活码输入完成
        time.sleep(1)

        # 计算确认按钮位置（假设在窗口的右下角）
        confirm_button_x = target_window.right - 60
        confirm_button_y = target_window.bottom - 30

        # 移动鼠标到确认按钮位置并点击
        pyautogui.moveTo(confirm_button_x, confirm_button_y)
        pyautogui.click()
    except IndexError:
        print(f"未找到标题为 '{window_title}' 的窗口。")
    except Exception as e:
        print("发生错误:", e)


# 获取激活码
activation_code = get_activation_code()

if activation_code:
    print("文件蜈蚣 - 激活码:", activation_code)

    # 指定窗口标题
    window_title = "文件蜈蚣 - 激活码"

    # 在指定窗口中输入激活码并点击确认按钮
    input_activation_code_and_click_confirm(window_title, activation_code)
