#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Diagnostics { struct StackFrame; };
namespace mscorlib::System::Diagnostics { struct StackTrace; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Exception; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System::Reflection { struct MethodBase; };
#include "System_Diagnostics_StackTrace_TraceFormat.h"

namespace mscorlib::System::Diagnostics
{
	struct StackTrace : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<mscorlib::System::Diagnostics::StackFrame*>* frames;
		IL2CPP::Array<mscorlib::System::Diagnostics::StackTrace*>* captured_traces;
		bool debug_info;
		struct StaticFields
		{
			int32_t METHODS_TO_SKIP;
			bool isAotidSet;
			mscorlib::System::String* aotid;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(bool fNeedFileInfo);
		void _ctor(int32_t skipFrames, bool fNeedFileInfo);
		void init_frames(int32_t skipFrames, bool fNeedFileInfo);
		static IL2CPP::Array<mscorlib::System::Diagnostics::StackFrame*>* get_trace(mscorlib::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo);
		void _ctor(mscorlib::System::Exception* e, bool fNeedFileInfo);
		void _ctor(mscorlib::System::Exception* e, int32_t skipFrames, bool fNeedFileInfo);
		int32_t get_FrameCount();
		mscorlib::System::Diagnostics::StackFrame* GetFrame(int32_t index);
		IL2CPP::Array<mscorlib::System::Diagnostics::StackFrame*>* GetFrames();
		static mscorlib::System::String* GetAotId();
		bool AddFrames(mscorlib::System::Text::StringBuilder* sb);
		void GetFullNameForStackTrace(mscorlib::System::Text::StringBuilder* sb, mscorlib::System::Reflection::MethodBase* mi);
		mscorlib::System::String* ToString();
		mscorlib::System::String* ToString(mscorlib::System::Diagnostics::StackTrace_TraceFormat traceFormat);
	};
}

