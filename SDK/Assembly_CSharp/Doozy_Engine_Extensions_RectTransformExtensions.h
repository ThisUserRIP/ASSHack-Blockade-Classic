#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct RectTransform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Doozy::Engine::Extensions
{
	struct RectTransformExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void Copy(UnityEngine_CoreModule::UnityEngine::RectTransform* target, UnityEngine_CoreModule::UnityEngine::RectTransform* from);
		static void FullScreen(UnityEngine_CoreModule::UnityEngine::RectTransform* target, bool resetScaleToOne);
		static void Center(UnityEngine_CoreModule::UnityEngine::RectTransform* target, bool resetScaleToOne);
		static void ResetAnchoredPosition3D(UnityEngine_CoreModule::UnityEngine::RectTransform* target);
		static void ResetLocalPosition(UnityEngine_CoreModule::UnityEngine::RectTransform* target);
		static void ResetLocalScaleToOne(UnityEngine_CoreModule::UnityEngine::RectTransform* target);
		static void AnchorMinToZero(UnityEngine_CoreModule::UnityEngine::RectTransform* target);
		static void AnchorMinToCenter(UnityEngine_CoreModule::UnityEngine::RectTransform* target);
		static void AnchorMaxToOne(UnityEngine_CoreModule::UnityEngine::RectTransform* target);
		static void AnchorMaxToCenter(UnityEngine_CoreModule::UnityEngine::RectTransform* target);
		static void CenterPivot(UnityEngine_CoreModule::UnityEngine::RectTransform* target);
		static void SizeDeltaToZero(UnityEngine_CoreModule::UnityEngine::RectTransform* target);
	};
}

