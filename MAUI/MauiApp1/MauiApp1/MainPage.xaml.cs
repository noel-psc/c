namespace MauiApp1;

public partial class MainPage : ContentPage
{
	int count = 0;
	string str = " ";

public MainPage()
	{
		InitializeComponent();
	}

	private void OnCounterClicked(object sender, EventArgs e)
	{
		count++;

		if (count == 1)
			CounterBtn.Text = $"Clicked {count} time";
		else
			CounterBtn.Text = $"Clicked {count} times";

		SemanticScreenReader.Announce(CounterBtn.Text);
	}

	private void OnMemoryBombClicked(object sender, EventArgs e)
	{
		str += str;
		double strLength = str.Length;
		MemoryLabel.Text = $"字符串长度为 {strLength / 1024 / 1024}MiB";
        SemanticScreenReader.Announce(MemoryLabel.Text);
    }

	private void OnMemoryAddClicked(object sender, EventArgs e)
	{
        string strOneMiB = " ";
        double strLength = str.Length;
        for (int i = 0; i < 20; i++) { strOneMiB += strOneMiB; }
		str += strOneMiB;
        MemoryLabel.Text = $"字符串长度为 {strLength / 1024 / 1024}MiB";
        SemanticScreenReader.Announce(MemoryLabel.Text);
    }
}

