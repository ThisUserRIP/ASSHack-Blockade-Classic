#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "LitJson_JsonMapper.h"
namespace Assembly_CSharp::LitJson { struct JsonMapper; };
namespace Assembly_CSharp::LitJson { struct WrapperFactory; };
namespace Assembly_CSharp::LitJson { struct ExporterFunc; };
namespace Assembly_CSharp::LitJson { struct ImporterFunc; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::LitJson { struct IJsonWrapper; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::LitJson { struct JsonWriter; };

namespace Assembly_CSharp::LitJson
{
	struct JsonMapper___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::LitJson::JsonMapper___c* __9;
			Assembly_CSharp::LitJson::WrapperFactory* __9__25_0;
			Assembly_CSharp::LitJson::ExporterFunc* __9__26_0;
			Assembly_CSharp::LitJson::ExporterFunc* __9__26_1;
			Assembly_CSharp::LitJson::ExporterFunc* __9__26_2;
			Assembly_CSharp::LitJson::ExporterFunc* __9__26_3;
			Assembly_CSharp::LitJson::ExporterFunc* __9__26_4;
			Assembly_CSharp::LitJson::ExporterFunc* __9__26_5;
			Assembly_CSharp::LitJson::ExporterFunc* __9__26_6;
			Assembly_CSharp::LitJson::ExporterFunc* __9__26_7;
			Assembly_CSharp::LitJson::ExporterFunc* __9__26_8;
			Assembly_CSharp::LitJson::ImporterFunc* __9__27_0;
			Assembly_CSharp::LitJson::ImporterFunc* __9__27_1;
			Assembly_CSharp::LitJson::ImporterFunc* __9__27_2;
			Assembly_CSharp::LitJson::ImporterFunc* __9__27_3;
			Assembly_CSharp::LitJson::ImporterFunc* __9__27_4;
			Assembly_CSharp::LitJson::ImporterFunc* __9__27_5;
			Assembly_CSharp::LitJson::ImporterFunc* __9__27_6;
			Assembly_CSharp::LitJson::ImporterFunc* __9__27_7;
			Assembly_CSharp::LitJson::ImporterFunc* __9__27_8;
			Assembly_CSharp::LitJson::ImporterFunc* __9__27_9;
			Assembly_CSharp::LitJson::ImporterFunc* __9__27_10;
			Assembly_CSharp::LitJson::ImporterFunc* __9__27_11;
			Assembly_CSharp::LitJson::WrapperFactory* __9__32_0;
			Assembly_CSharp::LitJson::WrapperFactory* __9__33_0;
			Assembly_CSharp::LitJson::WrapperFactory* __9__34_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		Assembly_CSharp::LitJson::IJsonWrapper* _ReadSkip_b__25_0();
		void _RegisterBaseExporters_b__26_0(mscorlib::System::Object* obj, Assembly_CSharp::LitJson::JsonWriter* writer);
		void _RegisterBaseExporters_b__26_1(mscorlib::System::Object* obj, Assembly_CSharp::LitJson::JsonWriter* writer);
		void _RegisterBaseExporters_b__26_2(mscorlib::System::Object* obj, Assembly_CSharp::LitJson::JsonWriter* writer);
		void _RegisterBaseExporters_b__26_3(mscorlib::System::Object* obj, Assembly_CSharp::LitJson::JsonWriter* writer);
		void _RegisterBaseExporters_b__26_4(mscorlib::System::Object* obj, Assembly_CSharp::LitJson::JsonWriter* writer);
		void _RegisterBaseExporters_b__26_5(mscorlib::System::Object* obj, Assembly_CSharp::LitJson::JsonWriter* writer);
		void _RegisterBaseExporters_b__26_6(mscorlib::System::Object* obj, Assembly_CSharp::LitJson::JsonWriter* writer);
		void _RegisterBaseExporters_b__26_7(mscorlib::System::Object* obj, Assembly_CSharp::LitJson::JsonWriter* writer);
		void _RegisterBaseExporters_b__26_8(mscorlib::System::Object* obj, Assembly_CSharp::LitJson::JsonWriter* writer);
		mscorlib::System::Object* _RegisterBaseImporters_b__27_0(mscorlib::System::Object* input);
		mscorlib::System::Object* _RegisterBaseImporters_b__27_1(mscorlib::System::Object* input);
		mscorlib::System::Object* _RegisterBaseImporters_b__27_2(mscorlib::System::Object* input);
		mscorlib::System::Object* _RegisterBaseImporters_b__27_3(mscorlib::System::Object* input);
		mscorlib::System::Object* _RegisterBaseImporters_b__27_4(mscorlib::System::Object* input);
		mscorlib::System::Object* _RegisterBaseImporters_b__27_5(mscorlib::System::Object* input);
		mscorlib::System::Object* _RegisterBaseImporters_b__27_6(mscorlib::System::Object* input);
		mscorlib::System::Object* _RegisterBaseImporters_b__27_7(mscorlib::System::Object* input);
		mscorlib::System::Object* _RegisterBaseImporters_b__27_8(mscorlib::System::Object* input);
		mscorlib::System::Object* _RegisterBaseImporters_b__27_9(mscorlib::System::Object* input);
		mscorlib::System::Object* _RegisterBaseImporters_b__27_10(mscorlib::System::Object* input);
		mscorlib::System::Object* _RegisterBaseImporters_b__27_11(mscorlib::System::Object* input);
		Assembly_CSharp::LitJson::IJsonWrapper* _ToObject_b__32_0();
		Assembly_CSharp::LitJson::IJsonWrapper* _ToObject_b__33_0();
		Assembly_CSharp::LitJson::IJsonWrapper* _ToObject_b__34_0();
	};
}

