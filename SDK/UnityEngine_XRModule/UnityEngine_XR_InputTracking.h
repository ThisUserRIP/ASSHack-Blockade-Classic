#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_XR_XRNodeState.h"
namespace UnityEngine_XRModule::UnityEngine::XR { struct XRNodeState; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_XR_InputTracking_TrackingStateEventType.h"
#include "UnityEngine_XR_XRNode.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_XRModule::UnityEngine::XR
{
	struct InputTracking : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Action_1<UnityEngine_XRModule::UnityEngine::XR::XRNodeState>* trackingAcquired;
			mscorlib::System::Action_1<UnityEngine_XRModule::UnityEngine::XR::XRNodeState>* trackingLost;
			mscorlib::System::Action_1<UnityEngine_XRModule::UnityEngine::XR::XRNodeState>* nodeAdded;
			mscorlib::System::Action_1<UnityEngine_XRModule::UnityEngine::XR::XRNodeState>* nodeRemoved;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void InvokeTrackingEvent(UnityEngine_XRModule::UnityEngine::XR::InputTracking_TrackingStateEventType eventType, UnityEngine_XRModule::UnityEngine::XR::XRNode nodeType, int64_t uniqueID, bool tracked);
		static void _cctor();
	};
}

