#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_XR_InputFeatureType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct InputFeatureUsage
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_Name;
		UnityEngine_XRModule::UnityEngine::XR::InputFeatureType m_InternalType;
		mscorlib::System::String* get_name();
		UnityEngine_XRModule::UnityEngine::XR::InputFeatureType get_internalType();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(UnityEngine_XRModule::UnityEngine::XR::InputFeatureUsage other);
		int32_t GetHashCode();
	};
}

