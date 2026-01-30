#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "UnityEngine_Experimental_Rendering_GraphicsFormat.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "UnityEngine_TextureFormat.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_RenderTextureFormat.h"
#include "UnityEngine_RenderTextureReadWrite.h"

namespace UnityEngine_CoreModule::UnityEngine::Experimental::Rendering
{
	struct GraphicsFormatUtility : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat GetFormat(UnityEngine_CoreModule::UnityEngine::Texture* texture);
		static UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(UnityEngine_CoreModule::UnityEngine::TextureFormat format, bool isSRGB);
		static UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_TextureFormat(UnityEngine_CoreModule::UnityEngine::TextureFormat format, bool isSRGB);
		static UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format, bool isSRGB);
		static UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format, bool isSRGB);
		static UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format, UnityEngine_CoreModule::UnityEngine::RenderTextureReadWrite readWrite);
		static bool IsSRGBFormat(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format);
		static UnityEngine_CoreModule::UnityEngine::RenderTextureFormat GetRenderTextureFormat(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format);
		static bool IsCompressedTextureFormat(UnityEngine_CoreModule::UnityEngine::TextureFormat format);
		static bool IsCrunchFormat(UnityEngine_CoreModule::UnityEngine::TextureFormat format);
	};
}

