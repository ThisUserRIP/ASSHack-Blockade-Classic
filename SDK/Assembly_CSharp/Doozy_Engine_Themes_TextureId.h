#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct TextureId
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Texture* m_texture;
		IL2CPP::Array<uint8_t>* SerializedGuid;
		mscorlib::System::Guid m_id;
		mscorlib::System::Guid get_Id();
		void set_Id(mscorlib::System::Guid value);
		UnityEngine_CoreModule::UnityEngine::Texture* get_Texture();
		void set_Texture(UnityEngine_CoreModule::UnityEngine::Texture* value);
		void _ctor(UnityEngine_CoreModule::UnityEngine::Texture* texture);
		void _ctor(mscorlib::System::Guid id, UnityEngine_CoreModule::UnityEngine::Texture* texture);
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void SetId(mscorlib::System::Guid newGuid);
		void SetTexture(UnityEngine_CoreModule::UnityEngine::Texture* texture);
	};
}

