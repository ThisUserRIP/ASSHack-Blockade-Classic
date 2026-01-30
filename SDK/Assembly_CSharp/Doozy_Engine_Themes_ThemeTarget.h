#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::Themes { struct ThemeData; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct ThemeTarget : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Guid ThemeId;
		mscorlib::System::Guid VariantId;
		mscorlib::System::Guid PropertyId;
		IL2CPP::Array<uint8_t>* ThemeIdSerializedGuid;
		IL2CPP::Array<uint8_t>* VariantIdSerializedGuid;
		IL2CPP::Array<uint8_t>* PropertyIdSerializedGuid;
		void OnValidate();
		void Awake();
		void OnEnable();
		void OnDisable();
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void UpdateTarget(Assembly_CSharp::Doozy::Engine::Themes::ThemeData* theme);
		void _ctor();
	};
}

