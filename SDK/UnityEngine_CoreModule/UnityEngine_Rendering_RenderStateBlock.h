#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Rendering_BlendState.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct BlendState; };
#include "UnityEngine_Rendering_RasterState.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct RasterState; };
#include "UnityEngine_Rendering_DepthState.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct DepthState; };
#include "UnityEngine_Rendering_StencilState.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct StencilState; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Rendering_RenderStateMask.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct RenderStateBlock
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Rendering::BlendState m_BlendState;
		UnityEngine_CoreModule::UnityEngine::Rendering::RasterState m_RasterState;
		UnityEngine_CoreModule::UnityEngine::Rendering::DepthState m_DepthState;
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilState m_StencilState;
		int32_t m_StencilReference;
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateMask m_Mask;
		void _ctor(UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateMask mask);
		void set_depthState(UnityEngine_CoreModule::UnityEngine::Rendering::DepthState value);
		UnityEngine_CoreModule::UnityEngine::Rendering::StencilState get_stencilState();
		void set_stencilState(UnityEngine_CoreModule::UnityEngine::Rendering::StencilState value);
		int32_t get_stencilReference();
		void set_stencilReference(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateMask get_mask();
		void set_mask(UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateMask value);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::RenderStateBlock other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
	};
}

