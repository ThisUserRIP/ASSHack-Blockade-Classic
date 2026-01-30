#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Experimental_Rendering_GraphicsFormat.h"
#include "UnityEngine_Rendering_TextureDimension.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_TextureWrapMode.h"
#include "UnityEngine_FilterMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "UnityEngine_ColorSpace.h"
#include "UnityEngine_TextureFormat.h"
#include "UnityEngine_Experimental_Rendering_FormatUsage.h"
namespace UnityEngine_CoreModule::UnityEngine { struct UnityException; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Texture : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t GenerateAllMips;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat();
		int32_t GetDataWidth();
		int32_t GetDataHeight();
		UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension GetDimension();
		int32_t get_width();
		void set_width(int32_t value);
		int32_t get_height();
		void set_height(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension get_dimension();
		void set_dimension(UnityEngine_CoreModule::UnityEngine::Rendering::TextureDimension value);
		bool get_isReadable();
		UnityEngine_CoreModule::UnityEngine::TextureWrapMode get_wrapMode();
		void set_wrapMode(UnityEngine_CoreModule::UnityEngine::TextureWrapMode value);
		void set_filterMode(UnityEngine_CoreModule::UnityEngine::FilterMode value);
		void set_anisoLevel(int32_t value);
		void set_mipMapBias(float value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_texelSize();
		int32_t Internal_GetActiveTextureColorSpace();
		UnityEngine_CoreModule::UnityEngine::ColorSpace get_activeTextureColorSpace();
		bool ValidateFormat(UnityEngine_CoreModule::UnityEngine::TextureFormat format);
		bool ValidateFormat(UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::GraphicsFormat format, UnityEngine_CoreModule::UnityEngine::Experimental::Rendering::FormatUsage usage);
		UnityEngine_CoreModule::UnityEngine::UnityException* CreateNonReadableException(UnityEngine_CoreModule::UnityEngine::Texture* t);
		static void _cctor();
		void get_texelSize_Injected(UnityEngine_CoreModule::UnityEngine::Vector2& ret);
	};
}

