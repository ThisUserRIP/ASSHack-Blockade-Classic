#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_SendMouseEvents_HitInfo.h"
namespace UnityEngine_InputLegacyModule::UnityEngine { struct SendMouseEvents_HitInfo; };
namespace UnityEngine_CoreModule::UnityEngine { struct Camera; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_InputLegacyModule::UnityEngine
{
	struct SendMouseEvents : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool s_MouseUsed;
			IL2CPP::Array<UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo>* m_LastHit;
			IL2CPP::Array<UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo>* m_MouseDownHit;
			IL2CPP::Array<UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo>* m_CurrentHit;
			IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Camera*>* m_Cameras;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void SetMouseMoved();
		static void DoSendMouseEvents(int32_t skipRTCameras);
		static void SendEvents(int32_t i, UnityEngine_InputLegacyModule::UnityEngine::SendMouseEvents_HitInfo hit);
		static void _cctor();
	};
}

