#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "UnityEngine_AnimatorControllerParameterType.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_AnimationModule::UnityEngine
{
	struct AnimatorControllerParameter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_Name;
		UnityEngine_AnimationModule::UnityEngine::AnimatorControllerParameterType m_Type;
		float m_DefaultFloat;
		int32_t m_DefaultInt;
		bool m_DefaultBool;
		mscorlib::System::String* get_name();
		int32_t get_nameHash();
		UnityEngine_AnimationModule::UnityEngine::AnimatorControllerParameterType get_type();
		bool Equals(mscorlib::System::Object* o);
		int32_t GetHashCode();
		void _ctor();
	};
}

