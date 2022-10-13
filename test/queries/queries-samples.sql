# This file contains a list of strings that are NOT valid SQL queries.
# Each line contains a single SQL query.
!PRAGMA kdf_iter=4000;
!PRAGMA table_info( TablesVersion );
!BEGIN EXCLUSIVE;
!COMMIT;
!CREATE INDEX IF NOT EXISTS  contact_alias_index ON rcontact ( alias );
CREATE TABLE IF NOT EXISTS MultiTaskInfo (  id TEXT PRIMARY KEY ,  type INTEGER default '0' ,  createTime LONG default '0' ,  updateTime LONG default '0' ,  showData BLOB,  data BLOB default '' );
CREATE TABLE IF NOT EXISTS TablesVersion (  tableHash INTEGER PRIMARY KEY ,  tableSQLMD5 TEXT);
DELETE FROM rconversation WHERE username='blogapp';
INSERT INTO SmileyInfo(enValue,thValue,twValue,fileName,eggIndex,key,flag,qqValue,position,cnValue) VALUES ('[Smart]','[Smart]','[機智]','2_06.png',2006,'[Smart]',0,'[机智]',-1,'[机智]');
INSERT OR REPLACE INTO userinfo VALUES (-2046825368,4,'false');
INSERT OR REPLACE INTO userinfo VALUES (262145,3,'1|0|16652096612183488');
select  username, alias, conRemark, domainList, nickname, pyInitial, quanPin, showHead, type, weiboFlag, weiboNickname, conRemarkPYFull, conRemarkPYShort, lvbuff, verifyFlag, encryptUsername, chatroomFlag, deleteFlag, contactLabelIds, descWordingId, openImAppid, sourceExtInfo, rowid from rcontact  where (type & 1!=0) and type & 32=0   AND type & 64 !=0  AND type >= 64 AND showHead = 32 order by case when verifyFlag & 8 != 0 then 0 else 1 end , showHead asc,  case when length(conRemarkPYFull) > 0 then upper(conRemarkPYFull)  else upper(quanPin) end asc,  case when length(conRemark) > 0 then upper(conRemark)  else upper(quanPin) end asc,  upper(quanPin) asc,  upper(nickname) asc,  upper(username) asc;
select  username, alias, conRemark, domainList, nickname, pyInitial, quanPin, showHead, type, weiboFlag, weiboNickname, conRemarkPYFull, conRemarkPYShort, lvbuff, verifyFlag, encryptUsername, chatroomFlag, deleteFlag, contactLabelIds, descWordingId, openImAppid, sourceExtInfo, rowid from rcontact where username='voip' or encryptUsername='voip';
SELECT * FROM ( select videoinfo2.filename,downloadtime from videoinfo2   WHERE status=103 LIMIT 10 ) UNION SELECT * FROM ( select videoinfo2.filename,downloadtime from videoinfo2   WHERE status=104 LIMIT 10 ) ORDER BY downloadtime DESC;
select * from TablesVersion;
SELECT * FROM userinfo WHERE id='77825';
SELECT count(*) from MediaDuplication;
select max(msgid) from message;
SELECT msgSvrId,createTime FROM message WHERE createTime > 1665036861000 AND  talker= 'blogapp';
UPDATE rcontact SET encryptUsername='',conRemark='',domainList='',lvbuff=x'7b00000004000000000000000000000000000000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000007d',verifyFlag=0,uiType=0,pyInitial='DYHXX',weiboNickname='',showHead=31,username='officialaccounts',type=33,nickname='订阅号消息',alias='',rowid=13,quanPin='DINGYUEHAOXIAOXI',chatroomFlag=0,conRemarkPYShort='',usernameFlag=0,descWordingId='',weiboFlag=0,contactLabelIds='',openImAppid='',conRemarkPYFull='' WHERE username='officialaccounts';
UPDATE rcontact SET encryptUsername='fake_1665209661424',conRemark='',domainList='',lvbuff=x'7b00000000000000000000000000000000000000000000000000000000000000000000000000000000000100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000007d',verifyFlag=0,uiType=0,pyInitial='',weiboNickname='',showHead=0,username='fake_1665209661423',type=0,nickname='',alias='',quanPin='',chatroomFlag=0,conRemarkPYShort='',usernameFlag=0,descWordingId='',weiboFlag=0,contactLabelIds='',openImAppid='',conRemarkPYFull='' WHERE username='readerapp';
