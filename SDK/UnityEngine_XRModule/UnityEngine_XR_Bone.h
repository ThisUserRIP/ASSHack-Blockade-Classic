#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct Bone
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t m_DeviceId;
		uint32_t m_FeatureIndex;
		uint64_t get_deviceId();
		uint32_t get_featureIndex();
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(UnityEngine_XRModule::UnityEngine::XR::Bone other);
		int32_t GetHashCode();
	};
}

