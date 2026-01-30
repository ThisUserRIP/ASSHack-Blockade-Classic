#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Texture.h"
#include "UnityEngine_TextureFormat.h"
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
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Texture2D : UnityEngine_CoreModule::UnityEngine::Texture
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::TextureFormat get_format();
		static UnityEngine_CoreModule::UnityEngine::Texture2D* get_whiteTexture();
		static UnityEngine_CoreModule::UnityEngine::Texture2D* get_blackTexture();
		static bool Internal_CreateImpl(UnityEngine_CoreModule::UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex);
		static void Internal_Create(UnityEngine_CoreModule::UnityEngine::Texture2D* mono, int32_t w, int32_t h, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, intptr_t nativeTex);
		bool get_isReadable();
		void ApplyImpl(bool updateMipmaps, bool makeNoLongerReadable);
		bool ResizeImpl(int32_t width, int32_t height);
		void SetPixelImpl(int32_t image, int32_t x, int32_t y, UnityEngine_CoreModule::UnityEngine::Color color);
		UnityEngine_CoreModule::UnityEngine::Color GetPixelImpl(int32_t image, int32_t x, int32_t y);
		UnityEngine_CoreModule::UnityEngine::Color GetPixelBilinearImpl(int32_t image, float u, float v);
		bool ResizeWithFormatImpl(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, bool hasMipMap);
		void ReadPixelsImpl(UnityEngine_CoreModule::UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps);
		void SetPixelsImpl(int32_t x, int32_t y, int32_t w, int32_t h, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* pixel, int32_t miplevel, int32_t frame);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, int32_t miplevel);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* GetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight);
		void _ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount, intptr_t nativeTex);
		void _ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void _ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear, intptr_t nativeTex);
		void _ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear);
		void _ctor(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain);
		void _ctor(int32_t width, int32_t height);
		void SetPixel(int32_t x, int32_t y, UnityEngine_CoreModule::UnityEngine::Color color);
		void SetPixels(int32_t x, int32_t y, int32_t blockWidth, int32_t blockHeight, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors, int32_t miplevel);
		void SetPixels(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* colors);
		UnityEngine_CoreModule::UnityEngine::Color GetPixel(int32_t x, int32_t y);
		UnityEngine_CoreModule::UnityEngine::Color GetPixelBilinear(float u, float v);
		void Apply(bool updateMipmaps, bool makeNoLongerReadable);
		void Apply(bool updateMipmaps);
		void Apply();
		bool Resize(int32_t width, int32_t height);
		bool Resize(int32_t width, int32_t height, UnityEngine_CoreModule::UnityEngine::TextureFormat format, bool hasMipMap);
		void ReadPixels(UnityEngine_CoreModule::UnityEngine::Rect source, int32_t destX, int32_t destY, bool recalculateMipMaps);
		void ReadPixels(UnityEngine_CoreModule::UnityEngine::Rect source, int32_t destX, int32_t destY);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* GetPixels(int32_t miplevel);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* GetPixels();
		void SetPixelImpl_Injected(int32_t image, int32_t x, int32_t y, UnityEngine_CoreModule::UnityEngine::Color& color);
		void GetPixelImpl_Injected(int32_t image, int32_t x, int32_t y, UnityEngine_CoreModule::UnityEngine::Color& ret);
		void GetPixelBilinearImpl_Injected(int32_t image, float u, float v, UnityEngine_CoreModule::UnityEngine::Color& ret);
		void ReadPixelsImpl_Injected(UnityEngine_CoreModule::UnityEngine::Rect& source, int32_t destX, int32_t destY, bool recalculateMipMaps);
	};
}

