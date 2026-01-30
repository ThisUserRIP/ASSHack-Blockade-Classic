#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "I2_Loc_SimpleJSON_JSONNode.h"
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONNode; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONArray; };
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONClass; };

namespace Assembly_CSharp::I2::Loc::SimpleJSON
{
	struct JSONLazyCreator : Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* m_Node;
		mscorlib::System::String* m_Key;
		void _ctor(Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* aNode);
		void _ctor(Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* aNode, mscorlib::System::String* aKey);
		void Set(Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* aVal);
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* get_Item(int32_t aIndex);
		void set_Item(int32_t aIndex, Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* value);
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* get_Item(mscorlib::System::String* aKey);
		void set_Item(mscorlib::System::String* aKey, Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* value);
		void Add(Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* aItem);
		void Add(mscorlib::System::String* aKey, Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* aItem);
		static bool op_Equality(Assembly_CSharp::I2::Loc::SimpleJSON::JSONLazyCreator* a, mscorlib::System::Object* b);
		static bool op_Inequality(Assembly_CSharp::I2::Loc::SimpleJSON::JSONLazyCreator* a, mscorlib::System::Object* b);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::String* aPrefix);
		int32_t get_AsInt();
		void set_AsInt(int32_t value);
		float get_AsFloat();
		void set_AsFloat(float value);
		double get_AsDouble();
		void set_AsDouble(double value);
		bool get_AsBool();
		void set_AsBool(bool value);
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONArray* get_AsArray();
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONClass* get_AsObject();
	};
	bool operator==(Assembly_CSharp::I2::Loc::SimpleJSON::JSONLazyCreator& a, mscorlib::System::Object& b);
	bool operator!=(Assembly_CSharp::I2::Loc::SimpleJSON::JSONLazyCreator& a, mscorlib::System::Object& b);
}

