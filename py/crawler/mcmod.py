from bs4 import BeautifulSoup

# 您提供的 HTML body 内容
html_content = """
<body>
    <svg aria-hidden="true" style="position: absolute; width: 0px; height: 0px; overflow: hidden;">
        <!-- ... 大量 SVG 内容被省略 ... -->
    </svg>
    <!-- ... 其他页面内容 ... -->
    <div class="class-box-right-version">
        <div class="class-box-right-version-title">支持的MC版本:</div>
        <div class="class-box-right-version-content">
            <h3>NeoForge</h3>
            <div class="game-version-bg">
                <a href="/game/1.20.6.html" target="_blank" title="1.20.6">1.20.6</a>
                <a href="/game/1.20.5.html" target="_blank" title="1.20.5">1.20.5</a>
                <a href="/game/1.20.4.html" target="_blank" title="1.20.4">1.20.4</a>
                <a href="/game/1.20.3.html" target="_blank" title="1.20.3">1.20.3</a>
                <a href="/game/1.20.2.html" target="_blank" title="1.20.2">1.20.2</a>
                <a href="/game/1.20.1.html" target="_blank" title="1.20.1">1.20.1</a>
            </div>
            <h3>Forge</h3>
            <div class="game-version-bg">
                <a href="/game/1.20.1.html" target="_blank" title="1.20.1">1.20.1</a>
                <a href="/game/1.19.4.html" target="_blank" title="1.19.4">1.19.4</a>
                <a href="/game/1.19.3.html" target="_blank" title="1.19.3">1.19.3</a>
                <!-- ... 其他 Forge 版本 ... -->
            </div>
        </div>
    </div>
    <!-- ... 其他页面内容 ... -->
</body>
"""

def extract_neoforge_versions(html):
    """
    从给定的 HTML 内容中解析出 NeoForge 支持的版本。

    Args:
        html (str): 网页的 HTML 字符串。

    Returns:
        list: 包含版本号的列表。
    """
    try:
        # 使用 BeautifulSoup 解析 HTML
        soup = BeautifulSoup(html, 'html.parser')

        # --- 核心定位逻辑 ---
        # 1. 找到文本内容为 "NeoForge" 的 <h3> 标题标签
        neoforge_header = soup.find('h3', string='NeoForge')

        if not neoforge_header:
            print("错误：在 HTML 中未找到 'NeoForge' 标题。")
            return []

        # 2. 找到紧跟在 <h3> 标题后面的、包含版本号的 <div> 容器
        #    这个 div 是 h3 标签的下一个兄弟节点 (next sibling)
        version_container = neoforge_header.find_next_sibling('div', class_='game-version-bg')

        if not version_container:
            print("错误：未找到 'NeoForge' 对应的版本容器。")
            return []

        # 3. 在该容器中查找所有的 <a> 标签，它们包含了版本号
        version_tags = version_container.find_all('a')

        # 4. 提取每个 <a> 标签的文本内容，并去除多余的空格
        versions = [tag.get_text(strip=True) for tag in version_tags]
        
        return versions

    except Exception as e:
        print(f"解析过程中发生错误: {e}")
        return []

# --- 主程序 ---
if __name__ == "__main__":
    print("正在解析 HTML 并提取 NeoForge 支持的 MC 版本...")
    
    supported_versions = extract_neoforge_versions(html_content)
    
    if supported_versions:
        print("\n成功提取到 NeoForge 支持的 MC 版本：")
        # 使用 ", " 连接列表，使输出更美观
        print(", ".join(supported_versions))
    else:
        print("\n未能提取到版本信息。")
