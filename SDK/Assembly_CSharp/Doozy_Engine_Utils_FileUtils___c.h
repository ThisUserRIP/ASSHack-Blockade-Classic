#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Doozy_Engine_Utils_FileUtils.h"
namespace Assembly_CSharp::Doozy::Engine::Utils { struct FileUtils; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Utils
{
	struct FileUtils___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::Doozy::Engine::Utils::FileUtils___c* __9;
			mscorlib::System::Func_2<mscorlib::System::String, mscorlib::System::String>* __9__9_0;
			mscorlib::System::Func_2<mscorlib::System::String, mscorlib::System::Boolean>* __9__9_1;
			mscorlib::System::Func_2<mscorlib::System::String, mscorlib::System::Boolean>* __9__9_2;
			mscorlib::System::Func_2<mscorlib::System::String, mscorlib::System::String>* __9__9_3;
			mscorlib::System::Func_2<mscorlib::System::String, mscorlib::System::Boolean>* __9__17_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		mscorlib::System::String* _GetFilePathsInFolder_b__9_0(mscorlib::System::String* p);
		bool _GetFilePathsInFolder_b__9_1(mscorlib::System::String* path);
		bool _GetFilePathsInFolder_b__9_2(mscorlib::System::String* path);
		mscorlib::System::String* _GetFilePathsInFolder_b__9_3(mscorlib::System::String* filePath);
		bool _ContainsHiddenFiles_b__17_0(mscorlib::System::String* path);
	};
}

