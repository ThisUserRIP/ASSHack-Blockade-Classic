#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_InternalStaticBatchingUtility.h"
namespace UnityEngine_CoreModule::UnityEngine { struct InternalStaticBatchingUtility; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace UnityEngine_CoreModule::UnityEngine { struct Renderer; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Mesh; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct InternalStaticBatchingUtility_StaticBatcherGOSorter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t GetMaterialId(UnityEngine_CoreModule::UnityEngine::Renderer* renderer);
		int32_t GetLightmapIndex(UnityEngine_CoreModule::UnityEngine::Renderer* renderer);
		static UnityEngine_CoreModule::UnityEngine::Renderer* GetRenderer(UnityEngine_CoreModule::UnityEngine::GameObject* go);
		static UnityEngine_CoreModule::UnityEngine::Mesh* GetMesh(UnityEngine_CoreModule::UnityEngine::GameObject* go);
		int64_t GetRendererId(UnityEngine_CoreModule::UnityEngine::Renderer* renderer);
		void _ctor();
	};
}

