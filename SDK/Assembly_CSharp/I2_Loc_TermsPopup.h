#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_PropertyAttribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct TermsPopup : UnityEngine_CoreModule::UnityEngine::PropertyAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _Filter_k__BackingField;
		void _ctor(mscorlib::System::String* filter);
		mscorlib::System::String* get_Filter();
		void set_Filter(mscorlib::System::String* value);
	};
}

