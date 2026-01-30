#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_UI_ControlMapper_LanguageData.h"
namespace Assembly_CSharp::Rewired::UI::ControlMapper { struct LanguageData; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	struct LanguageData_ModifierKeys : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* control;
		mscorlib::System::String* alt;
		mscorlib::System::String* shift;
		mscorlib::System::String* command;
		mscorlib::System::String* separator;
		void _ctor();
	};
}

