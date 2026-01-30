#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Texture.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "UnityEngine_Experimental_Rendering_TextureCreationFlags.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "UnityEngine_Experimental_Rendering_DefaultFormat.h"
#include "UnityEngine_TextureFormat.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Texture3D : UnityEngine_CoreModule::UnityEngine::Texture
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_isReadable();
		void SetPixelImpl(int32_t image, int32_t x, int32_t y, int32_t z, UnityEngine_CoreModule::UnityEngine::Color color);
		static bool Internal_CreateImpl(UnityEngine_CoreModule::UnityEngine::Texture3D* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex);
		static void Internal_Create(UnityEngine_CoreModule::UnityEngine::Texture3D* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex);
		void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);
		void SetPixels(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors, int32_t miplevel);
		void SetPixels(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, int32_t mipCount);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, int32_t mipCount, intptr_t nativeTex);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain, intptr_t nativeTex);
		void Apply(bool updateMipmaps, bool makeNoLongerReadable);
		void Apply(bool updateMipmaps);
		void Apply();
		void SetPixel(int32_t x, int32_t y, int32_t z, UnityEngine_CoreModule::UnityEngine::Color color, int32_t mipLevel);
		static void ValidateIsNotCrunched(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void SetPixelImpl_Injected(int32_t image, int32_t x, int32_t y, int32_t z, UnityEngine_CoreModule::UnityEngine::Color& color);
	};
}

