#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_MulticastDelegate.h"
#include "UnityEngine_UI_InputField.h"
namespace UnityEngine_UI::UnityEngine::UI { struct InputField; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Char.h"
namespace mscorlib::System { struct Char; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct IAsyncResult; };
namespace mscorlib::System { struct AsyncCallback; };

namespace UnityEngine_UI::UnityEngine::UI
{
	struct InputField_OnValidateInput : mscorlib::System::MulticastDelegate
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor(mscorlib::System::Object* object, intptr_t method);
		wchar_t Invoke(mscorlib::System::String* text, int32_t charIndex, wchar_t addedChar);
		mscorlib::System::IAsyncResult* BeginInvoke(mscorlib::System::String* text, int32_t charIndex, wchar_t addedChar, mscorlib::System::AsyncCallback* callback, mscorlib::System::Object* object);
		wchar_t EndInvoke(mscorlib::System::IAsyncResult* result);
	};
}

