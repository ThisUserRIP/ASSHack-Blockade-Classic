#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "I2_Loc_SimpleJSON_JSONNode.h"
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONNode; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::IO { struct BinaryWriter; };

namespace Assembly_CSharp::I2::Loc::SimpleJSON
{
	struct JSONArray : Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode>* m_List;
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* get_Item(int32_t aIndex);
		void set_Item(int32_t aIndex, Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* value);
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* get_Item(mscorlib::System::String* aKey);
		void set_Item(mscorlib::System::String* aKey, Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* value);
		int32_t get_Count();
		void Add(mscorlib::System::String* aKey, Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* aItem);
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* Remove(int32_t aIndex);
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* Remove(Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* aNode);
		mscorlib::System::Collections::Generic::IEnumerable_1<Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode>* get_Childs();
		mscorlib::System::Collections::IEnumerator* GetEnumerator();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* aPrefix);
		void Serialize(mscorlib::System::IO::BinaryWriter* aWriter);
		void _ctor();
	};
}

