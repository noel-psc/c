using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices.WindowsRuntime;
using Microsoft.UI.Xaml;
using Microsoft.UI.Xaml.Controls;
using Microsoft.UI.Xaml.Controls.Primitives;
using Microsoft.UI.Xaml.Data;
using Microsoft.UI.Xaml.Input;
using Microsoft.UI.Xaml.Media;
using Microsoft.UI.Xaml.Navigation;
using Microsoft.UI.Xaml.Shapes;
using Windows.ApplicationModel;
using Windows.ApplicationModel.Activation;
using Windows.Foundation;
using Windows.Foundation.Collections;
using CommunityToolkit.Common;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace TestEmailCommunityToolKit
{
    /// <summary>
    /// Provides application-specific behavior to supplement the default Application class.
    /// </summary>
    public partial class App : Application
    {
        private Window? _window;

        /// <summary>
        /// Initializes the singleton application object.  This is the first line of authored code
        /// executed, and as such is the logical equivalent of main() or WinMain().
        /// </summary>
        public App()
        {
            InitializeComponent();
        }

        /// <summary>
        /// Invoked when the application is launched.
        /// </summary>
        /// <param name="args">Details about the launch request and process.</param>
        protected override void OnLaunched(Microsoft.UI.Xaml.LaunchActivatedEventArgs args)
        {
            _window = new MainWindow();
            _window.Activate();
            _window.Title = "";


            if ("Spark_PSC@outlook.com".IsEmail())
            {
                _window.Title += "1";
            }
            if ("Circleqwq@outlook.com".IsEmail())
            {
                _window.Title += "2";
            }
            if ("Circle_Qwq@outlook.com".IsEmail())
            {
                _window.Title += "3";
            }
            if ("A@outlook.com".IsEmail())
            {
                _window.Title += "4";
            }
            if ("Ab@outlook.com".IsEmail())
            {
                _window.Title += "5";
            }
            if ("A@A.COM".IsEmail())
            {
                _window.Title += "6";
            }
            if ("a@A.COM".IsEmail())
            {
                _window.Title += "7";
            }
            if ("a@a.COM".IsEmail())
            {
                _window.Title += "8";
            }
            if ("aa@a.COM".IsEmail())
            {
                _window.Title += "9";
            }
            if ("aa@a.com".IsEmail())
            {
                _window.Title += "a";
            }
            if ("a@a.com".IsEmail())
            {
                _window.Title += "b";
            }
        }
    }
}
