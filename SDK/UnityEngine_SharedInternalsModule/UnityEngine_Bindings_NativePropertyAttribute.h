#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Bindings_NativeMethodAttribute.h"
#include "UnityEngine_Bindings_TargetType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_SharedInternalsModule::UnityEngine::Bindings
{
	struct NativePropertyAttribute : UnityEngine_SharedInternalsModule::UnityEngine::Bindings::NativeMethodAttribute
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_SharedInternalsModule::UnityEngine::Bindings::TargetType _TargetType_k__BackingField;
		void set_TargetType(UnityEngine_SharedInternalsModule::UnityEngine::Bindings::TargetType value);
		void _ctor();
		void _ctor(mscorlib::System::String* name);
		void _ctor(mscorlib::System::String* name, UnityEngine_SharedInternalsModule::UnityEngine::Bindings::TargetType targetType);
		void _ctor(mscorlib::System::String* name, bool isFree, UnityEngine_SharedInternalsModule::UnityEngine::Bindings::TargetType targetType);
	};
}

