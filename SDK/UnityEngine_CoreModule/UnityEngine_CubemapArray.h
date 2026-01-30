#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Texture.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "UnityEngine_Experimental_Rendering_TextureCreationFlags.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_CubemapFace.h"
#include "UnityEngine_Experimental_Rendering_DefaultFormat.h"
#include "UnityEngine_TextureFormat.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct CubemapArray : UnityEngine_CoreModule::UnityEngine::Texture
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_isReadable();
		static bool Internal_CreateImpl(UnityEngine_CoreModule::UnityEngine::CubemapArray* mono, int32_t ext, int32_t count, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		static void Internal_Create(UnityEngine_CoreModule::UnityEngine::CubemapArray* mono, int32_t ext, int32_t count, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);
		void SetPixels(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors, UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t arrayElement, int32_t miplevel);
		void SetPixels(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors, UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t arrayElement);
		void _ctor(int32_t width, int32_t cubemapCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void _ctor(int32_t width, int32_t cubemapCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void _ctor(int32_t width, int32_t cubemapCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);
		void _ctor(int32_t width, int32_t cubemapCount, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);
		void _ctor(int32_t width, int32_t cubemapCount, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear);
		void _ctor(int32_t width, int32_t cubemapCount, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain);
		void Apply(bool updateMipmaps, bool makeNoLongerReadable);
		void Apply();
		static void ValidateIsNotCrunched(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
	};
}

