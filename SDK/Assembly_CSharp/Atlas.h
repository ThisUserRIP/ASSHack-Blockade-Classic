#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct Atlas : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Material* material;
		int32_t width;
		int32_t height;
		bool alpha;
		void SetMaterial(UnityEngine_CoreModule::UnityEngine::Material* material);
		UnityEngine_CoreModule::UnityEngine::Material* GetMaterial();
		void SetWidth(int32_t width);
		int32_t GetWidth();
		void SetHeight(int32_t height);
		int32_t GetHeight();
		void SetAlpha(bool alpha);
		bool IsAlpha();
		UnityEngine_CoreModule::UnityEngine::Texture* GetTexture();
		UnityEngine_CoreModule::UnityEngine::Rect ToRect(int32_t pos);
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

