#pragma once

#include "mian.g.h"

namespace winrt::herencia::implementation
{
    struct mian : mianT<mian>
    {
        mian() 
        {
            // Xaml objects should not call InitializeComponent during construction.
            // See https://github.com/microsoft/cppwinrt/tree/master/nuget#initializecomponent
        }

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::herencia::factory_implementation
{
    struct mian : mianT<mian, implementation::mian>
    {
    };
}
