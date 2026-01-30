#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct ArrayList; };
namespace mscorlib::System::Runtime::Remoting { struct ChannelData; };
namespace mscorlib::System::Collections { struct Stack; };
namespace mscorlib::System { struct String; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::Mono::Xml { struct SmallXmlParser; };
namespace mscorlib::Mono::Xml { struct SmallXmlParser_IAttrList; };
#include "System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace mscorlib::System::Runtime::Remoting { struct ProviderData; };

namespace mscorlib::System::Runtime::Remoting
{
	struct ConfigHandler : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::ArrayList* typeEntries;
		mscorlib::System::Collections::ArrayList* channelInstances;
		mscorlib::System::Runtime::Remoting::ChannelData* currentChannel;
		mscorlib::System::Collections::Stack* currentProviderData;
		mscorlib::System::String* currentClientUrl;
		mscorlib::System::String* appName;
		mscorlib::System::String* currentXmlPath;
		bool onlyDelayedChannels;
		void _ctor(bool onlyDelayedChannels);
		void ValidatePath(mscorlib::System::String* element, IL2CPP::Array<mscorlib::System::String*>* paths);
		bool CheckPath(mscorlib::System::String* path);
		void OnStartParsing(mscorlib::Mono::Xml::SmallXmlParser* parser);
		void OnProcessingInstruction(mscorlib::System::String* name, mscorlib::System::String* text);
		void OnIgnorableWhitespace(mscorlib::System::String* s);
		void OnStartElement(mscorlib::System::String* name, mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs);
		void ParseElement(mscorlib::System::String* name, mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs);
		void OnEndElement(mscorlib::System::String* name);
		void ReadCustomProviderData(mscorlib::System::String* name, mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs);
		void ReadLifetine(mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs);
		mscorlib::System::TimeSpan ParseTime(mscorlib::System::String* s);
		void ReadChannel(mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs, bool isTemplate);
		mscorlib::System::Runtime::Remoting::ProviderData* ReadProvider(mscorlib::System::String* name, mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs, bool isTemplate);
		void ReadClientActivated(mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs);
		void ReadServiceActivated(mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs);
		void ReadClientWellKnown(mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs);
		void ReadServiceWellKnown(mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs);
		void ReadInteropXml(mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs, bool isElement);
		void ReadPreload(mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs);
		mscorlib::System::String* GetNotNull(mscorlib::Mono::Xml::SmallXmlParser_IAttrList* attrs, mscorlib::System::String* name);
		mscorlib::System::String* ExtractAssembly(mscorlib::System::String& type);
		void OnChars(mscorlib::System::String* ch);
		void OnEndParsing(mscorlib::Mono::Xml::SmallXmlParser* parser);
	};
}

