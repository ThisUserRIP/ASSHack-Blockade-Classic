#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_GradientColorKey.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GradientColorKey; };
#include "UnityEngine_GradientAlphaKey.h"
namespace UnityEngine_CoreModule::UnityEngine { struct GradientAlphaKey; };
#include "UnityEngine_GradientMode.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_CoreModule::UnityEngine
{
	struct Gradient : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t m_Ptr;
		static intptr_t Init();
		void Cleanup();
		bool Internal_Equals(intptr_t other);
		void _ctor();
		void Finalize();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GradientColorKey>* get_colorKeys();
		void set_colorKeys(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GradientColorKey>* value);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GradientAlphaKey>* get_alphaKeys();
		void set_alphaKeys(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GradientAlphaKey>* value);
		UnityEngine_CoreModule::UnityEngine::GradientMode get_mode();
		void set_mode(UnityEngine_CoreModule::UnityEngine::GradientMode value);
		void SetKeys(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GradientColorKey>* colorKeys, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GradientAlphaKey>* alphaKeys);
		bool Equals(mscorlib::System::Object* o);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Gradient* other);
		int32_t GetHashCode();
	};
}

