#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "UnityEngine_Windows_Speech_PhraseRecognizer.h"
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech { struct PhraseRecognizer; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "UnityEngine_Windows_Speech_PhraseRecognizedEventArgs.h"
namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech { struct PhraseRecognizedEventArgs; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_CoreModule::UnityEngine::Windows::Speech
{
	struct PhraseRecognizer_PhraseRecognizedDelegate : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		void Invoke(UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs args);
		mscorlib::System::IAsyncResult* BeginInvoke(UnityEngine_CoreModule::UnityEngine::Windows::Speech::PhraseRecognizedEventArgs args, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		void EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

