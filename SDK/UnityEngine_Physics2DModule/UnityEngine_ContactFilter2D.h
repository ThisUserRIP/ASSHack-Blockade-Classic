#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_Physics2DModule::UnityEngine
{
	struct ContactFilter2D
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool useTriggers;
		bool useLayerMask;
		bool useDepth;
		bool useOutsideDepth;
		bool useNormalAngle;
		bool useOutsideNormalAngle;
		UnityEngine_CoreModule::UnityEngine::LayerMask layerMask;
		float minDepth;
		float maxDepth;
		float minNormalAngle;
		float maxNormalAngle;
		void CheckConsistency();
		void SetLayerMask(UnityEngine_CoreModule::UnityEngine::LayerMask layerMask);
		void SetDepth(float minDepth, float maxDepth);
		static UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D CreateLegacyFilter(int32_t layerMask, float minDepth, float maxDepth);
		static void CheckConsistency_Injected(UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D& _unity_self);
	};
}

