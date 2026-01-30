#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_TMP_MaterialManager.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_MaterialManager; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Unity_TextMeshPro::TMPro { struct TMP_MaterialManager_MaskingMaterial; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_MaterialManager___c__DisplayClass11_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Material* stencilMaterial;
		void _ctor();
		bool _AddMaskingMaterial_b__0(Unity_TextMeshPro::TMPro::TMP_MaterialManager_MaskingMaterial* item);
	};
}

