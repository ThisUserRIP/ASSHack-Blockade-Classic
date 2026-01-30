#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	struct DeferredConfig : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool _IsOpenGL_k__BackingField;
			int32_t kPreferredCBufferSize;
			int32_t kPreferredStructuredBufferSize;
			int32_t kTilePixelWidth;
			int32_t kTilePixelHeight;
			int32_t kTilerDepth;
			int32_t kTilerSubdivisions;
			int32_t kAvgLightPerTile;
			int32_t kTileDepthInfoIntermediateLevel;
			bool kHasNativeQuadSupport;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_IsOpenGL();
		static void set_IsOpenGL(bool value);
		static bool get_UseCBufferForDepthRange();
		static bool get_UseCBufferForTileList();
		static bool get_UseCBufferForLightData();
		static bool get_UseCBufferForLightList();
	};
}

