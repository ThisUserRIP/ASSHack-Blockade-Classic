#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONArray; };
namespace Assembly_CSharp::I2::Loc::SimpleJSON { struct JSONClass; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::IO { struct BinaryWriter; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::IO { struct BinaryReader; };

namespace Assembly_CSharp::I2::Loc::SimpleJSON
{
	struct JSONNode : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Add(mscorlib::System::String* aKey, Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* aItem);
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* get_Item(int32_t aIndex);
		void set_Item(int32_t aIndex, Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* value);
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* get_Item(mscorlib::System::String* aKey);
		void set_Item(mscorlib::System::String* aKey, Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* value);
		mscorlib::System::String* get_Value();
		void set_Value(mscorlib::System::String* value);
		int32_t get_Count();
		void Add(Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* aItem);
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* Remove(mscorlib::System::String* aKey);
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* Remove(int32_t aIndex);
		Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* Remove(Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* aNode);
		mscorlib::System::Collections::Generic::IEnumerable_1<Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode>* get_Childs();
		mscorlib::System::Collections::Generic::IEnumerable_1<Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode>* get_DeepChilds();
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
		static Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* op_Implicit(mscorlib::System::String* s);
		static mscorlib::System::String* op_Implicit(Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* d);
		static bool op_Equality(Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* a, mscorlib::System::Object* b);
		static bool op_Inequality(Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* a, mscorlib::System::Object* b);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static mscorlib::System::String* Escape(mscorlib::System::String* aText);
		static Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* Parse(mscorlib::System::String* aJSON);
		void Serialize(mscorlib::System::IO::BinaryWriter* aWriter);
		void SaveToStream(mscorlib::System::IO::Stream* aData);
		void SaveToCompressedStream(mscorlib::System::IO::Stream* aData);
		void SaveToCompressedFile(mscorlib::System::String* aFileName);
		mscorlib::System::String* SaveToCompressedBase64();
		void SaveToFile(mscorlib::System::String* aFileName);
		mscorlib::System::String* SaveToBase64();
		static Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* Deserialize(mscorlib::System::IO::BinaryReader* aReader);
		static Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* LoadFromCompressedFile(mscorlib::System::String* aFileName);
		static Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* LoadFromCompressedStream(mscorlib::System::IO::Stream* aData);
		static Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* LoadFromCompressedBase64(mscorlib::System::String* aBase64);
		static Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* LoadFromStream(mscorlib::System::IO::Stream* aData);
		static Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* LoadFromFile(mscorlib::System::String* aFileName);
		static Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode* LoadFromBase64(mscorlib::System::String* aBase64);
		void _ctor();
	};
	bool operator==(Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode& a, mscorlib::System::Object& b);
	bool operator!=(Assembly_CSharp::I2::Loc::SimpleJSON::JSONNode& a, mscorlib::System::Object& b);
}

