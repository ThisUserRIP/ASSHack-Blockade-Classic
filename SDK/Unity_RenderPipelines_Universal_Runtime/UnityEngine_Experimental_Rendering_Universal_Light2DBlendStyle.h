#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "UnityEngine_Experimental_Rendering_Universal_Light2DBlendStyle_TextureChannel.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Experimental_Rendering_Universal_Light2DBlendStyle_BlendMode.h"
#include "UnityEngine_Experimental_Rendering_Universal_Light2DBlendStyle_BlendFactors.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct Light2DBlendStyle_BlendFactors; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Rendering_Universal_RenderTargetHandle.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal { struct RenderTargetHandle; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_Experimental_Rendering_Universal_Light2DBlendStyle_MaskChannelFilter.h"
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal { struct Light2DBlendStyle_MaskChannelFilter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	struct Light2DBlendStyle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DBlendStyle_TextureChannel maskTextureChannel;
		float renderTextureScale;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DBlendStyle_BlendMode blendMode;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DBlendStyle_BlendFactors customBlendFactors;
		bool _isDirty_k__BackingField;
		bool _hasRenderTarget_k__BackingField;
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::RenderTargetHandle renderTargetHandle;
		UnityEngine_CoreModule::UnityEngine::Vector2 get_blendFactors();
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal::Light2DBlendStyle_MaskChannelFilter get_maskTextureChannelFilter();
		bool get_isDirty();
		void set_isDirty(bool value);
		bool get_hasRenderTarget();
		void set_hasRenderTarget(bool value);
	};
}

