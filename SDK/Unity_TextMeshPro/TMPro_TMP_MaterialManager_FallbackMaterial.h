#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_TMP_MaterialManager.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_MaterialManager; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_MaterialManager_FallbackMaterial : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t fallbackID;
		UnityEngine_CoreModule::UnityEngine::Material* sourceMaterial;
		int32_t sourceMaterialCRC;
		UnityEngine_CoreModule::UnityEngine::Material* fallbackMaterial;
		int32_t count;
		void _ctor();
	};
}

