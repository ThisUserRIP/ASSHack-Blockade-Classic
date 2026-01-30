#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_TouchScreenKeyboardType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct TouchScreenKeyboard_InternalConstructorHelperArguments; };
namespace UnityEngine_CoreModule::UnityEngine { struct TouchScreenKeyboard_InternalConstructorHelperArguments; };
#include "UnityEngine_TouchScreenKeyboard_Status.h"
#include "UnityEngine_RangeInt.h"
namespace UnityEngine_CoreModule::UnityEngine { struct RangeInt; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct TouchScreenKeyboard : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		static void Internal_Destroy(intptr_t ptr);
		void Destroy();
		void Finalize();
		void _ctor(mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, mscorlib::System::String* textPlaceholder, int32_t characterLimit);
		static intptr_t TouchScreenKeyboard_InternalConstructorHelper(UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard_InternalConstructorHelperArguments& arguments, mscorlib::System::String* text, mscorlib::System::String* textPlaceholder);
		static bool get_isSupported();
		static bool get_isInPlaceEditingAllowed();
		static UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard* Open(mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, mscorlib::System::String* textPlaceholder, int32_t characterLimit);
		static UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard* Open(mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure);
		mscorlib::System::String* get_text();
		void set_text(mscorlib::System::String* value);
		static void set_hideInput(bool value);
		bool get_active();
		void set_active(bool value);
		UnityEngine_CoreModule::UnityEngine::TouchScreenKeyboard_Status get_status();
		void set_characterLimit(int32_t value);
		bool get_canGetSelection();
		bool get_canSetSelection();
		UnityEngine_CoreModule::UnityEngine::RangeInt get_selection();
		void set_selection(UnityEngine_CoreModule::UnityEngine::RangeInt value);
		static void GetSelection(int32_t& start, int32_t& length);
		static void SetSelection(int32_t start, int32_t length);
	};
}

