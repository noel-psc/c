using System.Diagnostics;

namespace MauiApp2;

public partial class MainPage : ContentPage
{
	int count = 0;
    String s = "6";
    String m = GetMemory();

    public MainPage()
	{
		InitializeComponent();
        
    }

    public static string GetMemory()
    {
        Process proc = Process.GetCurrentProcess();
        long b = proc.PrivateMemorySize64;
        for (int i = 0; i < 2; i++)
        {
            b /= 1024;
        }
        return b + "MB";
    }

    private void OnCounterClicked(object sender, EventArgs e)
	{
		count++;
        s += s;
        m = GetMemory();

        if (s.Length < 1000)
        {
            TextBar.Text = $"{s}";
        }
        else
        {
            TextBar.Text = $"6*{s.Length}";
        }
        
		Counter.Text = $"点击了{count}次，内存占用{m}";

		SemanticScreenReader.Announce(CounterBtn.Text);
	}
}

