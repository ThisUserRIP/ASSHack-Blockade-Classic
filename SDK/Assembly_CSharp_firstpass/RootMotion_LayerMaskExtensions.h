#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp_firstpass::RootMotion
{
	struct LayerMaskExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool Contains(UnityEngine_CoreModule::UnityEngine::LayerMask mask, int32_t layer);
		static UnityEngine_CoreModule::UnityEngine::LayerMask Create(IL2CPP::Array<mscorlib::System::String*>* layerNames);
		static UnityEngine_CoreModule::UnityEngine::LayerMask Create(IL2CPP::Array<int32_t>* layerNumbers);
		static UnityEngine_CoreModule::UnityEngine::LayerMask NamesToMask(IL2CPP::Array<mscorlib::System::String*>* layerNames);
		static UnityEngine_CoreModule::UnityEngine::LayerMask LayerNumbersToMask(IL2CPP::Array<int32_t>* layerNumbers);
		static UnityEngine_CoreModule::UnityEngine::LayerMask Inverse(UnityEngine_CoreModule::UnityEngine::LayerMask original);
		static UnityEngine_CoreModule::UnityEngine::LayerMask AddToMask(UnityEngine_CoreModule::UnityEngine::LayerMask original, IL2CPP::Array<mscorlib::System::String*>* layerNames);
		static UnityEngine_CoreModule::UnityEngine::LayerMask RemoveFromMask(UnityEngine_CoreModule::UnityEngine::LayerMask original, IL2CPP::Array<mscorlib::System::String*>* layerNames);
		static IL2CPP::Array<mscorlib::System::String*>* MaskToNames(UnityEngine_CoreModule::UnityEngine::LayerMask original);
		static IL2CPP::Array<int32_t>* MaskToNumbers(UnityEngine_CoreModule::UnityEngine::LayerMask original);
		static mscorlib::System::String* MaskToString(UnityEngine_CoreModule::UnityEngine::LayerMask original);
		static mscorlib::System::String* MaskToString(UnityEngine_CoreModule::UnityEngine::LayerMask original, mscorlib::System::String* delimiter);
	};
}

