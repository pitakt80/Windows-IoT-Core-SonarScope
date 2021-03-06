//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace org { namespace alljoyn { namespace example { namespace Sonar {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement ISonarService. Instead, SonarServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class SonarServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] ISonarService
{
public:
    // Method Invocation Events
    event Windows::Foundation::TypedEventHandler<SonarServiceEventAdapter^, SonarStopCalledEventArgs^>^ StopCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SonarServiceEventAdapter^, SonarStopCalledEventArgs^>^ handler) 
        { 
            return _StopCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SonarServiceEventAdapter^>(sender), safe_cast<SonarStopCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _StopCalled -= token; 
        } 
    internal: 
        void raise(SonarServiceEventAdapter^ sender, SonarStopCalledEventArgs^ args) 
        { 
            _StopCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<SonarServiceEventAdapter^, SonarStartCalledEventArgs^>^ StartCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SonarServiceEventAdapter^, SonarStartCalledEventArgs^>^ handler) 
        { 
            return _StartCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SonarServiceEventAdapter^>(sender), safe_cast<SonarStartCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _StartCalled -= token; 
        } 
    internal: 
        void raise(SonarServiceEventAdapter^ sender, SonarStartCalledEventArgs^ args) 
        { 
            _StartCalled(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<SonarServiceEventAdapter^, SonarSpeechCalledEventArgs^>^ SpeechCalled 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SonarServiceEventAdapter^, SonarSpeechCalledEventArgs^>^ handler) 
        { 
            return _SpeechCalled += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SonarServiceEventAdapter^>(sender), safe_cast<SonarSpeechCalledEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SpeechCalled -= token; 
        } 
    internal: 
        void raise(SonarServiceEventAdapter^ sender, SonarSpeechCalledEventArgs^ args) 
        { 
            _SpeechCalled(sender, args);
        } 
    }

    // Property Read Events
    // Property Write Events
    // ISonarService Implementation
    virtual Windows::Foundation::IAsyncOperation<SonarStopResult^>^ StopAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<SonarStartResult^>^ StartAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<SonarSpeechResult^>^ SpeechAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);



private:
    event Windows::Foundation::EventHandler<Platform::Object^>^ _StopCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _StartCalled;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _SpeechCalled;
};

} } } } 
