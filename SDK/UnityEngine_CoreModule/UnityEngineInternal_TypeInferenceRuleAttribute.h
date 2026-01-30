#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Attribute.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngineInternal_TypeInferenceRules.h"

namespace UnityEngine_CoreModule::UnityEngineInternal
{
	struct TypeInferenceRuleAttribute : mscorlib::System::Attribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _rule;
		void _ctor(UnityEngine_CoreModule::UnityEngineInternal::TypeInferenceRules rule);
		void _ctor(mscorlib::System::String* rule);
		mscorlib::System::String* ToString();
	};
}

