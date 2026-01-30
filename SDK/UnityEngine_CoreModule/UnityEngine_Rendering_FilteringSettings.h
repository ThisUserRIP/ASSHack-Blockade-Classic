#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_RenderQueueRange.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RenderQueueRange; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "UnityEngine_Rendering_SortingLayerRange.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct SortingLayerRange; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct FilteringSettings
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange m_RenderQueueRange;
		int32_t m_LayerMask;
		uint32_t m_RenderingLayerMask;
		int32_t m_ExcludeMotionVectorObjects;
		UnityEngine_CoreModule::UnityEngine::Rendering::SortingLayerRange m_SortingLayerRange;
		void _ctor(mscorlib::System::Nullable_1<UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange> renderQueueRange, int32_t layerMask, uint32_t renderingLayerMask, int32_t excludeMotionVectorObjects);
		void set_renderQueueRange(UnityEngine_CoreModule::UnityEngine::Rendering::RenderQueueRange value);
		void set_layerMask(int32_t value);
		void set_renderingLayerMask(uint32_t value);
		void set_excludeMotionVectorObjects(bool value);
		void set_sortingLayerRange(UnityEngine_CoreModule::UnityEngine::Rendering::SortingLayerRange value);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::FilteringSettings other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

