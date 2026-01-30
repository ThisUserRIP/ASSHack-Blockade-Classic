#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIContent; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace Rewired_Core::Rewired::Utils
{
	struct GUITools : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Texture2D* GetRotatedTexture(UnityEngine_CoreModule::UnityEngine::Texture2D* texture, float angle, UnityEngine_CoreModule::UnityEngine::Color backgroundColor);
		static IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* ToGUIContentArray(IL2CPP::Array<mscorlib::System::String*>* items);
		static IL2CPP::Array<UnityEngine_IMGUIModule::UnityEngine::GUIContent*>* ToGUIContentArray(mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>* items);
	};
}

