#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct ShaderTagId
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_Id;
		void _ctor(mscorlib::System::String* name);
		int32_t get_id();
		void set_id(int32_t value);
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId other);
		int32_t GetHashCode();
		static bool op_Equality(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId tag1, UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId tag2);
		static bool op_Inequality(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId tag1, UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId tag2);
		static void _cctor();
	};
	bool operator==(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId& tag1, UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId& tag2);
	bool operator!=(UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId& tag1, UnityEngine_CoreModule::UnityEngine::Rendering::ShaderTagId& tag2);
}

