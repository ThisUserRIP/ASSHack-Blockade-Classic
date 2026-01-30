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
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "UnityEngine_Experimental_Rendering_DefaultFormat.h"
#include "UnityEngine_TextureFormat.h"
#include "UnityEngine_CubemapFace.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Cubemap : UnityEngine_CoreModule::UnityEngine::Texture
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static bool Internal_CreateImpl(UnityEngine_CoreModule::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex);
		static void Internal_Create(UnityEngine_CoreModule::UnityEngine::Cubemap* mono, int32_t ext, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex);
		void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);
		bool get_isReadable();
		void SetPixelImpl(int32_t image, int32_t x, int32_t y, UnityEngine_CoreModule::UnityEngine::Color color);
		void _ctor(int32_t width, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void _ctor(int32_t width, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void _ctor(int32_t width, UnityEngine_CoreModule::UnityEngine::TextureFormat format, int32_t mipCount);
		void _ctor(int32_t width, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);
		void _ctor(int32_t width, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, int32_t mipCount, intptr_t nativeTex);
		void _ctor(int32_t width, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain, intptr_t nativeTex);
		void _ctor(int32_t width, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain);
		void SetPixel(UnityEngine_CoreModule::UnityEngine::CubemapFace face, int32_t x, int32_t y, UnityEngine_CoreModule::UnityEngine::Color color);
		void Apply(bool updateMipmaps, bool makeNoLongerReadable);
		void Apply();
		static void ValidateIsNotCrunched(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void SetPixelImpl_Injected(int32_t image, int32_t x, int32_t y, UnityEngine_CoreModule::UnityEngine::Color& color);
	};
}

