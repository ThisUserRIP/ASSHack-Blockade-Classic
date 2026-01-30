#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Texture.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "UnityEngine_Experimental_Rendering_TextureCreationFlags.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Experimental_Rendering_DefaultFormat.h"
#include "UnityEngine_TextureFormat.h"

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Texture2DArray : UnityEngine_CoreModule::UnityEngine::Texture
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t get_allSlices();
		bool get_isReadable();
		static bool Internal_CreateImpl(UnityEngine_CoreModule::UnityEngine::Texture2DArray* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		static void Internal_Create(UnityEngine_CoreModule::UnityEngine::Texture2DArray* mono, int32_t w, int32_t h, int32_t d, int32_t mipCount, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::DefaultFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear);
		void _ctor(int32_t width, int32_t height, int32_t depth, UnityEngine_CoreModule::UnityEngine::TextureFormat textureFormat, bool mipChain);
		static void ValidateIsNotCrunched(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);
	};
}

