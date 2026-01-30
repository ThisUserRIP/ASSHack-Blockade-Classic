#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_XR_XRNode.h"
#include "UnityEngine_XR_AvailableTrackingData.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct XRNodeState
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_XRModule::UnityEngine::XR::XRNode m_Type;
		UnityEngine_XRModule::UnityEngine::XR::AvailableTrackingData m_AvailableFields;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Position;
		UnityEngine_CoreModule::UnityEngine::Quaternion m_Rotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Velocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_AngularVelocity;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Acceleration;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_AngularAcceleration;
		int32_t m_Tracked;
		uint64_t m_UniqueID;
		void set_uniqueID(uint64_t value);
		void set_nodeType(UnityEngine_XRModule::UnityEngine::XR::XRNode value);
		void set_tracked(bool value);
	};
}

