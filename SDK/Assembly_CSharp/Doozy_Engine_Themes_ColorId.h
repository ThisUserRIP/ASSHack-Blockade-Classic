#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ColorId
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Color m_color;
		IL2CPP::Array<uint8_t>* SerializedGuid;
		mscorlib::System::Guid m_id;
		mscorlib::System::Guid get_Id();
		void set_Id(mscorlib::System::Guid value);
		UnityEngine_CoreModule::UnityEngine::Color get_Color();
		void set_Color(UnityEngine_CoreModule::UnityEngine::Color value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Color color);
		void _ctor(mscorlib::System::Guid id, UnityEngine_CoreModule::UnityEngine::Color color);
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void SetId(mscorlib::System::Guid newGuid);
		void SetColor(UnityEngine_CoreModule::UnityEngine::Color color);
	};
}

