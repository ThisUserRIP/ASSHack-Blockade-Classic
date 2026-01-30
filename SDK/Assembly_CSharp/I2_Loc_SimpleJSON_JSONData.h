#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "I2_Loc_SimpleJSON_JSONNode.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::IO { struct BinaryWriter; };

namespace Assembly_CSharp::I2::Loc::SimpleJSON
{
	struct JSONData : Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* m_Data;
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		void _ctor(mscorlib::System::String* aData);
		void _ctor(float aData);
		void _ctor(double aData);
		void _ctor(bool aData);
		void _ctor(int32_t aData);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* aPrefix);
		void Serialize(mscorlib::System::IO::BinaryWriter* aWriter);
	};
}

