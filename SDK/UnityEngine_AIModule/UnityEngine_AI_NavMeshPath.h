#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_AI_NavMeshPathStatus.h"

namespace UnityEngine_AIModule::UnityEngine::AI
{
	struct NavMeshPath : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* m_Corners;
		void _ctor();
		void Finalize();
		static intptr_t InitializeNavMeshPath();
		static void DestroyNavMeshPath(intptr_t ptr);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* CalculateCornersInternal();
		void ClearCornersInternal();
		void ClearCorners();
		void CalculateCorners();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* get_corners();
		UnityEngine_AIModule::UnityEngine::AI::NavMeshPathStatus get_status();
	};
}

