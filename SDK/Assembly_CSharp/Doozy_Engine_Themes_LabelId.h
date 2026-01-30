#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Themes
{
	struct LabelId
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_label;
		IL2CPP::Array<uint8_t>* SerializedGuid;
		mscorlib::System::Guid m_id;
		mscorlib::System::Guid get_Id();
		mscorlib::System::String* get_Label();
		void set_Label(mscorlib::System::String* value);
		void _ctor(mscorlib::System::String* label);
		void _ctor(mscorlib::System::Guid guid, mscorlib::System::String* label);
		void OnBeforeSerialize();
		void OnAfterDeserialize();
		void SetId(mscorlib::System::Guid newGuid);
		void SetLabel(mscorlib::System::String* label);
	};
}

